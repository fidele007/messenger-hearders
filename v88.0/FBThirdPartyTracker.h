/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FBThirdPartyTracker : NSObject {

	NSString* _trackerID;
	NSString* _htmlString;
	NSURL* _baseURL;

}

@property (nonatomic,copy,readonly) NSString * trackerID;               //@synthesize trackerID=_trackerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * htmlString;              //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,copy,readonly) NSURL * baseURL;                    //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
-(NSString *)trackerID;
-(id)initWithTrackerID:(id)arg1 HTMLString:(id)arg2 baseURLString:(id)arg3 ;
-(id)description;
-(unsigned long long)type;
-(NSURL *)baseURL;
-(NSString *)htmlString;
@end

