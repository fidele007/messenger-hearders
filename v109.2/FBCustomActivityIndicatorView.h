/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <FBSharedFramework/FBUIConfigurable.h>

@class NSString;

@interface FBCustomActivityIndicatorView : UIView <FBUIConfigurable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
+(id)newWithStyle:(unsigned long long)arg1 ;
+(Class)layerClass;
-(id)_activityIndicatorLayer;
-(void)_guardActivityIndicatorAnimation;
-(void)applicationForegroundedWithNotification:(id)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_registerObservers;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end

