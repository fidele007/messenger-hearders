/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@interface FBFeedHScrollPaginatorComponentController : CKComponentController {

	unsigned long long _currentDotIndex;
	BOOL _showLeftArrow;
	BOOL _showRightArrow;

}
-(void)didMount;
-(void)didUpdateComponent;
-(void)didRemount;
-(void)updateDotsWithCurrentDotIndex:(unsigned long long)arg1 ;
-(void)updateArrowsWithShowLeftArrow:(BOOL)arg1 showRightArrow:(BOOL)arg2 shouldPulseArrow:(BOOL)arg3 ;
-(void)updatePaginatorWithCurrentDotIndex:(unsigned long long)arg1 showLeftArrow:(BOOL)arg2 showRightArrow:(BOOL)arg3 shouldPulseArrow:(BOOL)arg4 ;
@end

