/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDBinaryResource;
@class NSString;

@interface CDResourcePair : NSObject {

	NSString* _key;
	id<CDBinaryResource> _resource;

}

@property (nonatomic,readonly) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id<CDBinaryResource> resource;              //@synthesize resource=_resource - In the implementation block
-(id)initWithKey:(id)arg1 resource:(id)arg2 ;
-(NSString *)key;
-(id<CDBinaryResource>)resource;
@end

