/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoCaptionParser.h>

@class NSArray, NSString;

@interface FBVideoSRTParser : NSObject <FBVideoCaptionParser> {

	NSArray* _captions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parse:(id)arg1 error:(id*)arg2 ;
+(double)timeIntervalFromString:(id)arg1 ;
-(id)initWithCaptions:(id)arg1 ;
-(id)getCaptionForTime:(double)arg1 ;
@end
