/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageCellElementAppearanceListener.h>

@class FBUserSession, MNGameAdminMessageAppearanceLogger, NSString;

@interface MNGenericAdminMessageAppearanceLogger : NSObject <FBViewerContextClassProvidable, MNMessageCellElementAppearanceListener> {

	FBUserSession* _session;
	MNGameAdminMessageAppearanceLogger* _gameAdminMessageAppearanceLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)genericAdminMessageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(id)initWithSession:(id)arg1 gameAdminMessageAppearanceLogger:(id)arg2 ;
@end

