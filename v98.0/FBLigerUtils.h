/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBLigerUtils : NSObject
+(id)dictionaryForMap:(map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)arg1 ;
+(id)transformResponse:(const HTTPResponse*)arg1 andUrl:(id)arg2 ;
+(id)removeIPFromURL:(id)arg1 withHeaders:(id)arg2 ;
+(BOOL)shouldAllowRequest:(id)arg1 allRequestsAllowed:(BOOL)arg2 ;
+(id)redirectRequestFromRequest:(id)arg1 withNewLocation:(id)arg2 status:(long long)arg3 ;
@end
