/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNContactImporterStoreWriting.h>

@class FBContactStore, NSString;

@interface MNContactImporterContactStoreWriteRunner : NSObject <FBViewerContextClassProvidable, MNContactImporterStoreWriting> {

	FBContactStore* _contactStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeSyncPeopleToStore:(id)arg1 ;
-(void)removeSyncPeopleFromStore:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

