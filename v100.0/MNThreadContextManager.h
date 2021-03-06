/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class MNThreadContextLoader, MNThreadContextManagerListenerAnnouncer, FBUserSession, MNThreadParticipantNameFormatter, NSString;

@interface MNThreadContextManager : NSObject <FBClassProvidable> {

	MNThreadContextLoader* _threadContextLoader;
	MNThreadContextManagerListenerAnnouncer* _threadContextManagerListenerAnnoncer;
	FBUserSession* _session;
	MNThreadParticipantNameFormatter* _nameFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadContextViewModelForGroupThreadKey:(id)arg1 oldestLoadedMessageSenderId:(id)arg2 isFirstMessageLoaded:(BOOL)arg3 usersByUserId:(id)arg4 groupName:(id)arg5 ;
-(id)threadContextViewModelForCanonicalThreadKey:(id)arg1 isFirstMessageLoaded:(BOOL)arg2 usersByUserId:(id)arg3 folderType:(long long)arg4 ;
-(id)threadContextViewModelForSecureThreadKey:(id)arg1 isFirstMessageLoaded:(BOOL)arg2 usersByUserId:(id)arg3 ;
-(void)updateCanonicalThreadContextByAddingAsMessengerContact:(id)arg1 ;
-(id)initWithThreadContextLaoder:(id)arg1 threadContextManagerListenerAnnoncer:(id)arg2 session:(id)arg3 threadParticipantNameFormatter:(id)arg4 ;
-(id)_loadThreadContextForGroupThreadKey:(id)arg1 firstSender:(id)arg2 groupName:(id)arg3 ;
-(id)_loadThreadContextForCanonicalThreadKey:(id)arg1 usersByUserId:(id)arg2 folderType:(long long)arg3 ;
-(id)_loadThreadContextForSecureThreadKey:(id)arg1 usersByUserId:(id)arg2 ;
-(void)_doLoadThreadContextCompletionForThreadKey:(id)arg1 error:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

