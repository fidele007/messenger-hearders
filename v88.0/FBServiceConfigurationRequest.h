/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServiceConfigurationRequesting.h>

@class NSDictionary, NSString;

@interface FBServiceConfigurationRequest : NSObject <FBServiceConfigurationRequesting> {

	NSDictionary* _HTTPheaders;
	unsigned long long _hardTimeout;

}

@property (nonatomic,copy,readonly) NSDictionary * HTTPheaders;              //@synthesize HTTPheaders=_HTTPheaders - In the implementation block
@property (nonatomic,readonly) unsigned long long hardTimeout;               //@synthesize hardTimeout=_hardTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHardTimeout:(unsigned long long)arg1 ;
-(void)setHTTPHeader:(id)arg1 withValue:(id)arg2 ;
-(unsigned long long)hardTimeout;
-(id)initWithHTTPHeaders:(id)arg1 hardTimeout:(unsigned long long)arg2 ;
-(NSDictionary *)HTTPheaders;
-(NSString *)description;
@end

