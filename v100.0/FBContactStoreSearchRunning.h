/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactStoreSearchRunning <NSObject>
@required
-(void)fetchContactWithId:(id)arg1 listener:(id)arg2;
-(void)fetchContactsWithIds:(id)arg1 listener:(id)arg2;
-(void)fetchTopContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchTopContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 withinList:(id)arg3 listener:(id)arg4;
-(void)fetchTopMessengerContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchTopNonMessengerContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)fetchAllContactsWithFetchLimit:(unsigned)arg1 listener:(id)arg2;
-(void)fetchSpokenToContactsWithFetchLimit:(unsigned)arg1 sortField:(id)arg2 listener:(id)arg3;
-(void)startWithCollection:(id)arg1;

@end
