/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComponentControllerWorkingRangeListening <NSObject>
@optional
-(void)componentEnteredWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentEnteredFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3;
-(void)componentExitedFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3;
-(void)componentEnteredFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;

@end

