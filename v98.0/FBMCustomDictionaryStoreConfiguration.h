/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMCustomDictionaryStoreConfiguration : FBValueObject <NSCopying> {

	BOOL _ignoreDeserializeFailure;
	double _maxWriteInterval;
	unsigned long long _customBlobType;

}

@property (nonatomic,readonly) double maxWriteInterval;                        //@synthesize maxWriteInterval=_maxWriteInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long customBlobType;              //@synthesize customBlobType=_customBlobType - In the implementation block
@property (nonatomic,readonly) BOOL ignoreDeserializeFailure;                  //@synthesize ignoreDeserializeFailure=_ignoreDeserializeFailure - In the implementation block
-(id)initWithMaxWriteInterval:(double)arg1 customBlobType:(unsigned long long)arg2 ignoreDeserializeFailure:(BOOL)arg3 ;
-(unsigned long long)customBlobType;
-(double)maxWriteInterval;
-(BOOL)ignoreDeserializeFailure;
@end
