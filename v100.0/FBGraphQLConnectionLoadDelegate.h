/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionLoadDelegate <NSObject>
@required
-(void)graphQLConnectionLoad:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2;
-(void)graphQLConnectionLoad:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 newLoadLocation:(id)arg3;
-(void)graphQLConnectionLoad:(id)arg1 didComplete:(id)arg2;
-(void)graphQLConnectionLoad:(id)arg1 didLoadEmptyPage:(id)arg2;
-(void)graphQLConnectionLoad:(id)arg1 cannotInsertLoadedPage:(id)arg2;

@end

