/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class UIView;

@interface CKStatefulViewComponentController : CKComponentController {

	UIView* _statefulView;
	BOOL _mounted;
	id _statefulViewContext;

}
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(id)contextForNewStatefulView:(id)arg1 ;
+(long long)maximumPoolSize:(id)arg1 ;
-(void)didMount;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)didRemount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)statefulView;
-(BOOL)canRelinquishStatefulView;
-(void)_relinquishStatefulViewIfPossible;
-(void)_presentStatefulView;
-(void)canRelinquishStatefulViewDidChange;
@end

