/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNMessageCellElementAppearanceListener.h>

@class NSString;

@interface MNMessageCellElementAppearanceListenerAnnouncer : FBAnnouncerBase <MNMessageCellElementAppearanceListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(void)adminMessageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(void)messageCellWillDisappear:(id)arg1 withMessageRow:(id)arg2 ;
-(void)profileImageViewDidAppear:(id)arg1 ;
-(void)profileImageViewDidTap:(id)arg1 ;
-(void)profileImageViewDidDisappear:(id)arg1 ;
-(void)receiptViewDidAppear:(id)arg1 ;
-(void)receiptViewDidUpdate:(id)arg1 ;
-(void)receiptViewDidDisappear:(id)arg1 ;
-(void)failedViewDidAppear:(id)arg1 ;
-(void)failedViewDidDisappear:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

