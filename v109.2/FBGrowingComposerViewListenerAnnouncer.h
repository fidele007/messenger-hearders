/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBAnnouncerBase.h>
#import <Messenger/FBGrowingComposerViewListener.h>

@class NSString;

@interface FBGrowingComposerViewListenerAnnouncer : FBAnnouncerBase <FBGrowingComposerViewListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)growingComposerViewDidChange:(id)arg1 ;
-(void)growingComposerViewDidEndEditing:(id)arg1 ;
-(void)growingComposerViewDidBeginEditing:(id)arg1 ;
@end

