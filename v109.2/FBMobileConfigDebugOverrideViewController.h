/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@class NSString, FBMobileConfigDebugOverridesView;

@interface FBMobileConfigDebugOverrideViewController : UIViewController {

	int _parameterType;
	unsigned long long _configParameter;
	shared_ptr<mobileconfig::FBMobileConfigOverridesTable>* _overridesTable;
	NSString* _overrideValue;
	FBMobileConfigDebugOverridesView* _mobileConfigDebugOverridesView;
	BOOL _isQEParam;

}
-(void)_setupNavigationItems;
-(void)_saveOverride;
-(void)_showMessage:(id)arg1 withTitle:(id)arg2 andClose:(BOOL)arg3 ;
-(id)initWithParameterType:(int)arg1 overridesTable:(shared_ptr<mobileconfig::FBMobileConfigOverridesTable>*)arg2 configParameter:(unsigned long long)arg3 overrideValue:(id)arg4 isQEParam:(BOOL)arg5 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_cancel;
@end

