/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FBPlaylistRequest : NSObject {

	/*^block*/id _responseBlock;
	NSString* _videoID;
	NSString* _trackerID;
	long long _initalbytestart;
	NSURL* _requestUrl;

}
-(void)respond:(id)arg1 ;
-(id)_translatePlaylistData:(id)arg1 ;
-(id)initWithResponse:(/*^block*/id)arg1 videoID:(id)arg2 trackerID:(id)arg3 url:(id)arg4 ;
-(void)respondWithError:(id)arg1 ;
@end

