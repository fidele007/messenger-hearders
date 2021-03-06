/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTJSStackFrame : NSObject {

	NSString* _methodName;
	NSString* _file;
	long long _lineNumber;
	long long _column;

}

@property (nonatomic,copy,readonly) NSString * methodName;              //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                    //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) long long lineNumber;                    //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) long long column;                        //@synthesize column=_column - In the implementation block
+(id)stackFrameWithLine:(id)arg1 ;
+(id)stackFrameWithDictionary:(id)arg1 ;
+(id)stackFramesWithLines:(id)arg1 ;
+(id)stackFramesWithDictionaries:(id)arg1 ;
-(id)initWithMethodName:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 column:(long long)arg4 ;
-(NSString *)methodName;
-(long long)lineNumber;
-(long long)column;
-(id)toDictionary;
-(NSString *)file;
@end

