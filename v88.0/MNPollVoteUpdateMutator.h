/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNPollVoteUpdateMutator : NSObject {

	FBUserSession* _session;

}
-(void)performVoteUpdateMutationWithQuestionFBID:(id)arg1 optionIDToIsSelectedMap:(id)arg2 dirtyAddOptionText:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end

