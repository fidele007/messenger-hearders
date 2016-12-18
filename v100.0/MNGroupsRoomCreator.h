/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNGroupsRoomCreatorDelegate;
@class MNGroupsRoomCreatorInjector, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest, FBMGroupThreadKey, NSString;

@interface MNGroupsRoomCreator : NSObject <FBClassInjectable, FBNetworkerRequestDelegate> {

	MNGroupsRoomCreatorInjector* _injector;
	FBGraphBatchParticipatingRequest* _profileImageRequest;
	FBSimpleNetworkerRequest* _request;
	FBMGroupThreadKey* _groupThreadKey;
	id<MNGroupsRoomCreatorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNGroupsRoomCreatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)_handleRoomCreateMutationSuccess:(id)arg1 roomSummary:(id)arg2 ;
-(void)_handleRoomCreateMutationFailure:(id)arg1 ;
-(void)_beginRoomProfileImageUpload:(id)arg1 forThreadFbId:(id)arg2 ;
-(void)_didSucceedCreatingNewRoomWithGroupThreadKey:(id)arg1 ;
-(void)createNewRoomWithRoomSummary:(id)arg1 entryPoint:(unsigned long long)arg2 ;
-(void)setDelegate:(id<MNGroupsRoomCreatorDelegate>)arg1 ;
-(id<MNGroupsRoomCreatorDelegate>)delegate;
@end

