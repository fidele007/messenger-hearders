/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAddContactOperationDelegate <NSObject>
@optional
-(id)addContactOperationAddContactRequester:(id)arg1;
-(id)addContactOperation:(id)arg1 profileFetcherForContactId:(id)arg2;

@required
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2;
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2 withMatchedProfile:(id)arg3;
-(void)addContactOperation:(id)arg1 didFailWithError:(id)arg2;

@end

