/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface FBLoomConfiguration : NSObject <NSCoding> {

	NSDictionary* _internalConfiguration;
	mutex _m;

}
-(id)arrayConfigurationForKey:(id)arg1 ;
-(id)dictionaryConfigurationForKey:(id)arg1 ;
-(id)dictionaryConfiguration;
-(void)setInternalConfiguration:(id)arg1 ;
-(id)internalConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
@end

