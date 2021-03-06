/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class FBNuxConfiguration, NSMutableDictionary;

@interface FBNuxCatalogNuxEntry : NSObject <NSCoding> {

	FBNuxConfiguration* _nuxConfiguration;
	NSMutableDictionary* _recordsByVersion;

}

@property (nonatomic,readonly) FBNuxConfiguration * nuxConfiguration;               //@synthesize nuxConfiguration=_nuxConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recordsByVersion;              //@synthesize recordsByVersion=_recordsByVersion - In the implementation block
-(NSMutableDictionary *)recordsByVersion;
-(FBNuxConfiguration *)nuxConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

