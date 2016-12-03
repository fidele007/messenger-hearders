/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMProfileRange : FBValueObject <NSCoding, NSCopying> {

	long long _offset;
	long long _length;
	NSString* _profileID;

}

@property (nonatomic,readonly) long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long length;                       //@synthesize length=_length - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileID;              //@synthesize profileID=_profileID - In the implementation block
-(id)initWithOffset:(long long)arg1 length:(long long)arg2 profileID:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)length;
-(long long)offset;
-(NSString *)profileID;
@end
