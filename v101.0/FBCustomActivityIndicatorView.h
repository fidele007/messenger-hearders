/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>

@class NSString;

@interface FBCustomActivityIndicatorView : UIView <FBUIConfigurable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithStyle:(unsigned long long)arg1 ;
+(id)defaultFBUIConfig;
+(Class)layerClass;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_registerObservers;
-(id)_activityIndicatorLayer;
-(void)_guardActivityIndicatorAnimation;
-(void)applicationForegroundedWithNotification:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end
