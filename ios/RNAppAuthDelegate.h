#import <UIKit/UIKit.h>

@protocol OIDAuthorizationFlowSession;

@interface RNAppAuthDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic, strong, nullable) id<OIDAuthorizationFlowSession> currentAuthorizationFlow;

@end