//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError;

@interface BCRSASHA1Verify : NSObject
{
    BOOL _verified;
    NSError *_error;
    NSData *_inputData;
    struct OpaqueSecKeyRef *_publicKey;
    NSData *_signatureData;
}


- (void)dealloc;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithInputData:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2 signatureData:(id)arg3;
@property(retain, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) struct OpaqueSecKeyRef *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) BOOL verified; // @synthesize verified=_verified;
- (void)verify;

@end

