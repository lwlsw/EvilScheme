#import <UIKit/UIKit.h>
#import <EvilKit/EvilKit.h>
#import "../L0Prefs/L0Prefs.h"
#import "EVSPortionVC.h"

@interface EVSOutlineVC : L0PrefVC <L0TextCellDelegate, L0PrefVCDelegate, UITableViewDelegate, UITableViewDataSource>
@property (atomic, strong) NSMutableArray<NSObject<EVKURLPortion> *> *outline;
@property (atomic, strong) NSString *regex;
@property (atomic, strong) NSString *key;
@end
