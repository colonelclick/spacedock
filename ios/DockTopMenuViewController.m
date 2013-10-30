#import "DockTopMenuViewController.h"
#import "DockShipsViewController.h"
#import "DockSquadsListController.h"
#import "DockCaptainsViewController.h"

@interface DockTopMenuViewController ()

@end

@implementation DockTopMenuViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Segue management

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    
    if ([[segue identifier] isEqualToString:@"GoToShips"]) {
        id destination = [segue destinationViewController];
        DockShipsViewController *shipsViewController = (DockShipsViewController *)destination;
        shipsViewController.managedObjectContext = self.managedObjectContext;
        [shipsViewController clearTarget];
    } else if ([[segue identifier] isEqualToString:@"GoToSquads"]) {
        id destination = [segue destinationViewController];
        DockSquadsListController *controller = (DockSquadsListController *)destination;
        controller.managedObjectContext = self.managedObjectContext;
    } else if ([[segue identifier] isEqualToString:@"GoToCaptains"]) {
        id destination = [segue destinationViewController];
        DockCaptainsViewController *controller = (DockCaptainsViewController *)destination;
        controller.managedObjectContext = self.managedObjectContext;
    }
}

@end
