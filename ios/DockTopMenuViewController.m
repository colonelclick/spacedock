#import "DockTopMenuViewController.h"
#import "DockShipsViewController.h"
#import "DockSquadsViewController.h"
#import "DockAddSquadViewController.h"

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
    } else if ([[segue identifier] isEqualToString:@"GoToSquads"]) {
        id destination = [segue destinationViewController];
        DockSquadsViewController *controller = (DockSquadsViewController *)destination;
        controller.managedObjectContext = self.managedObjectContext;
    }
}

@end
