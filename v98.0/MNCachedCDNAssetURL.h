/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface MNCachedCDNAssetURL : NSObject <NSSecureCoding> {

	NSURL* _url;
	long long _expirationTimestamp;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long expirationTimestamp;              //@synthesize expirationTimestamp=_expirationTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)expirationTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
@end

