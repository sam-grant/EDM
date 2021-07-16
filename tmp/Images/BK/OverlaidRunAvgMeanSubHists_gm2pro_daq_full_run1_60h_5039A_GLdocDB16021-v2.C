void OverlaidRunAvgMeanSubHists_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 24 21:06:55 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-6.428571,-1.577534,7.857143,0.39569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yCaloMeanSubRunAvg_1__26 = new TH1D("h_yCaloMeanSubRunAvg_1__26","",1875,-75,75);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(936,0.25);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(937,0.8333333);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(938,0.4583333);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(939,0.5416667);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_1__26->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(936,0.1020621);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(937,0.186339);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(938,0.1381927);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(939,0.1502313);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_1__26->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_1__26->SetEntries(61);
   h_yCaloMeanSubRunAvg_1__26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#352a86");
   h_yCaloMeanSubRunAvg_1__26->SetLineColor(ci);

   ci = TColor::GetColor("#352a86");
   h_yCaloMeanSubRunAvg_1__26->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetTitle("Mean subtracted #LTy_{calo}#GT [mm]");
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetRange(876,1000);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->CenterTitle(true);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetTitleOffset(1.1);
   h_yCaloMeanSubRunAvg_1__26->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetTitle("Arb. Units");
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->CenterTitle(true);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetNdivisions(4000510);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetTitleOffset(1.1);
   h_yCaloMeanSubRunAvg_1__26->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__26->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__26->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__26->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_1__26->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__26->Draw("HIST PLC PMC");
   
   TH1D *h_yCaloMeanSubRunAvg_2__27 = new TH1D("h_yCaloMeanSubRunAvg_2__27","",1875,-75,75);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(936,0.3333333);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(937,0.8333333);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(938,0.5416667);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(939,0.3333333);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(940,0.4166667);
   h_yCaloMeanSubRunAvg_2__27->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(936,0.1178511);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(937,0.186339);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(938,0.1502313);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(939,0.1178511);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(940,0.1317616);
   h_yCaloMeanSubRunAvg_2__27->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_2__27->SetEntries(61);
   h_yCaloMeanSubRunAvg_2__27->SetStats(0);

   ci = TColor::GetColor("#273ba5");
   h_yCaloMeanSubRunAvg_2__27->SetLineColor(ci);

   ci = TColor::GetColor("#273ba5");
   h_yCaloMeanSubRunAvg_2__27->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_2__27->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_2__27->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_2__27->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_2__27->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_2__27->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_2__27->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_2__27->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_2__27->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_2__27->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_2__27->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_3__28 = new TH1D("h_yCaloMeanSubRunAvg_3__28","",1875,-75,75);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(936,0.2916667);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(937,0.75);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(938,0.5416667);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(939,0.5);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_3__28->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(936,0.1102396);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(937,0.1767767);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(938,0.1502313);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(939,0.1443376);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_3__28->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_3__28->SetEntries(61);
   h_yCaloMeanSubRunAvg_3__28->SetStats(0);

   ci = TColor::GetColor("#1a4dc4");
   h_yCaloMeanSubRunAvg_3__28->SetLineColor(ci);

   ci = TColor::GetColor("#1a4dc4");
   h_yCaloMeanSubRunAvg_3__28->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_3__28->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_3__28->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_3__28->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_3__28->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_3__28->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_3__28->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_3__28->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_3__28->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_3__28->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_3__28->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_4__29 = new TH1D("h_yCaloMeanSubRunAvg_4__29","",1875,-75,75);
   h_yCaloMeanSubRunAvg_4__29->SetBinContent(936,0.4166667);
   h_yCaloMeanSubRunAvg_4__29->SetBinContent(937,0.6666667);
   h_yCaloMeanSubRunAvg_4__29->SetBinContent(938,0.5833333);
   h_yCaloMeanSubRunAvg_4__29->SetBinContent(939,0.3333333);
   h_yCaloMeanSubRunAvg_4__29->SetBinContent(940,0.5416667);
   h_yCaloMeanSubRunAvg_4__29->SetBinError(936,0.1317616);
   h_yCaloMeanSubRunAvg_4__29->SetBinError(937,0.1666667);
   h_yCaloMeanSubRunAvg_4__29->SetBinError(938,0.1559024);
   h_yCaloMeanSubRunAvg_4__29->SetBinError(939,0.1178511);
   h_yCaloMeanSubRunAvg_4__29->SetBinError(940,0.1502313);
   h_yCaloMeanSubRunAvg_4__29->SetEntries(61);
   h_yCaloMeanSubRunAvg_4__29->SetStats(0);

   ci = TColor::GetColor("#0f5edc");
   h_yCaloMeanSubRunAvg_4__29->SetLineColor(ci);

   ci = TColor::GetColor("#0f5edc");
   h_yCaloMeanSubRunAvg_4__29->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_4__29->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_4__29->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_4__29->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_4__29->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_4__29->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_4__29->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_4__29->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_4__29->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_4__29->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_4__29->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_5__30 = new TH1D("h_yCaloMeanSubRunAvg_5__30","",1875,-75,75);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(935,0.04166667);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(936,0.5);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(937,0.5416667);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(938,0.4583333);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(939,0.4583333);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(940,0.3333333);
   h_yCaloMeanSubRunAvg_5__30->SetBinContent(941,0.2083333);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(935,0.04166667);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(936,0.1443376);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(937,0.1502313);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(938,0.1381927);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(939,0.1381927);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(940,0.1178511);
   h_yCaloMeanSubRunAvg_5__30->SetBinError(941,0.0931695);
   h_yCaloMeanSubRunAvg_5__30->SetEntries(61);
   h_yCaloMeanSubRunAvg_5__30->SetStats(0);

   ci = TColor::GetColor("#116ada");
   h_yCaloMeanSubRunAvg_5__30->SetLineColor(ci);

   ci = TColor::GetColor("#116ada");
   h_yCaloMeanSubRunAvg_5__30->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_5__30->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_5__30->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_5__30->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_5__30->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_5__30->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_5__30->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_5__30->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_5__30->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_5__30->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_5__30->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_6__31 = new TH1D("h_yCaloMeanSubRunAvg_6__31","",1875,-75,75);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(936,0.25);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(937,0.7916667);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(938,0.625);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(939,0.375);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(940,0.4583333);
   h_yCaloMeanSubRunAvg_6__31->SetBinContent(941,0.04166667);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(936,0.1020621);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(937,0.1816208);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(938,0.1613743);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(939,0.125);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(940,0.1381927);
   h_yCaloMeanSubRunAvg_6__31->SetBinError(941,0.04166667);
   h_yCaloMeanSubRunAvg_6__31->SetEntries(61);
   h_yCaloMeanSubRunAvg_6__31->SetStats(0);

   ci = TColor::GetColor("#1277d7");
   h_yCaloMeanSubRunAvg_6__31->SetLineColor(ci);

   ci = TColor::GetColor("#1277d7");
   h_yCaloMeanSubRunAvg_6__31->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_6__31->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_6__31->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_6__31->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_6__31->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_6__31->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_6__31->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_6__31->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_6__31->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_6__31->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_6__31->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_7__32 = new TH1D("h_yCaloMeanSubRunAvg_7__32","",1875,-75,75);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(935,0.04166667);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(936,0.4583333);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(937,0.5416667);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(938,0.625);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(939,0.375);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(940,0.4166667);
   h_yCaloMeanSubRunAvg_7__32->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(935,0.04166667);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(936,0.1381927);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(937,0.1502313);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(938,0.1613743);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(939,0.125);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(940,0.1317616);
   h_yCaloMeanSubRunAvg_7__32->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_7__32->SetEntries(61);
   h_yCaloMeanSubRunAvg_7__32->SetStats(0);

   ci = TColor::GetColor("#1283d4");
   h_yCaloMeanSubRunAvg_7__32->SetLineColor(ci);

   ci = TColor::GetColor("#1283d4");
   h_yCaloMeanSubRunAvg_7__32->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_7__32->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_7__32->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_7__32->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_7__32->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_7__32->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_7__32->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_7__32->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_7__32->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_7__32->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_7__32->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_8__33 = new TH1D("h_yCaloMeanSubRunAvg_8__33","",1875,-75,75);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(936,0.2916667);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(937,0.7083333);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(938,0.7916667);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(939,0.2083333);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_8__33->SetBinContent(941,0.1666667);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(936,0.1102396);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(937,0.1717961);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(938,0.1816208);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(939,0.0931695);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_8__33->SetBinError(941,0.08333333);
   h_yCaloMeanSubRunAvg_8__33->SetEntries(61);
   h_yCaloMeanSubRunAvg_8__33->SetStats(0);

   ci = TColor::GetColor("#0d8fd0");
   h_yCaloMeanSubRunAvg_8__33->SetLineColor(ci);

   ci = TColor::GetColor("#0d8fd0");
   h_yCaloMeanSubRunAvg_8__33->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_8__33->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_8__33->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_8__33->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_8__33->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_8__33->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_8__33->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_8__33->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_8__33->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_8__33->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_8__33->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_9__34 = new TH1D("h_yCaloMeanSubRunAvg_9__34","",1875,-75,75);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(936,0.2916667);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(937,0.75);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(938,0.75);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(939,0.2916667);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_9__34->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(936,0.1102396);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(937,0.1767767);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(938,0.1767767);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(939,0.1102396);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_9__34->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_9__34->SetEntries(61);
   h_yCaloMeanSubRunAvg_9__34->SetStats(0);

   ci = TColor::GetColor("#089bcc");
   h_yCaloMeanSubRunAvg_9__34->SetLineColor(ci);

   ci = TColor::GetColor("#089bcc");
   h_yCaloMeanSubRunAvg_9__34->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_9__34->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_9__34->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_9__34->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_9__34->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_9__34->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_9__34->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_9__34->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_9__34->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_9__34->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_9__34->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_10__35 = new TH1D("h_yCaloMeanSubRunAvg_10__35","",1875,-75,75);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(936,0.4166667);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(937,0.5833333);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(938,0.6666667);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(939,0.3333333);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(940,0.5);
   h_yCaloMeanSubRunAvg_10__35->SetBinContent(941,0.04166667);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(936,0.1317616);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(937,0.1559024);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(938,0.1666667);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(939,0.1178511);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(940,0.1443376);
   h_yCaloMeanSubRunAvg_10__35->SetBinError(941,0.04166667);
   h_yCaloMeanSubRunAvg_10__35->SetEntries(61);
   h_yCaloMeanSubRunAvg_10__35->SetStats(0);

   ci = TColor::GetColor("#0aa6c5");
   h_yCaloMeanSubRunAvg_10__35->SetLineColor(ci);

   ci = TColor::GetColor("#0aa6c5");
   h_yCaloMeanSubRunAvg_10__35->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_10__35->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_10__35->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_10__35->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_10__35->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_10__35->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_10__35->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_10__35->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_10__35->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_10__35->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_10__35->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_11__36 = new TH1D("h_yCaloMeanSubRunAvg_11__36","",1875,-75,75);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(936,0.5833333);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(937,0.5416667);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(938,0.6666667);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(939,0.25);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(940,0.25);
   h_yCaloMeanSubRunAvg_11__36->SetBinContent(941,0.25);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(936,0.1559024);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(937,0.1502313);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(938,0.1666667);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(939,0.1020621);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(940,0.1020621);
   h_yCaloMeanSubRunAvg_11__36->SetBinError(941,0.1020621);
   h_yCaloMeanSubRunAvg_11__36->SetEntries(61);
   h_yCaloMeanSubRunAvg_11__36->SetStats(0);

   ci = TColor::GetColor("#18acb8");
   h_yCaloMeanSubRunAvg_11__36->SetLineColor(ci);

   ci = TColor::GetColor("#18acb8");
   h_yCaloMeanSubRunAvg_11__36->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_11__36->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_11__36->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_11__36->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_11__36->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_11__36->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_11__36->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_11__36->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_11__36->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_11__36->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_11__36->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_12__37 = new TH1D("h_yCaloMeanSubRunAvg_12__37","",1875,-75,75);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(934,0.04166667);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(936,0.3333333);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(937,0.7083333);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(938,0.5);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(939,0.4583333);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(940,0.4166667);
   h_yCaloMeanSubRunAvg_12__37->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(934,0.04166667);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(936,0.1178511);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(937,0.1717961);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(938,0.1443376);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(939,0.1381927);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(940,0.1317616);
   h_yCaloMeanSubRunAvg_12__37->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_12__37->SetEntries(61);
   h_yCaloMeanSubRunAvg_12__37->SetStats(0);

   ci = TColor::GetColor("#26b3aa");
   h_yCaloMeanSubRunAvg_12__37->SetLineColor(ci);

   ci = TColor::GetColor("#26b3aa");
   h_yCaloMeanSubRunAvg_12__37->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_12__37->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_12__37->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_12__37->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_12__37->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_12__37->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_12__37->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_12__37->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_12__37->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_12__37->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_12__37->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_13__38 = new TH1D("h_yCaloMeanSubRunAvg_13__38","",1875,-75,75);
   h_yCaloMeanSubRunAvg_13__38->SetBinContent(936,0.125);
   h_yCaloMeanSubRunAvg_13__38->SetBinContent(937,0.7083333);
   h_yCaloMeanSubRunAvg_13__38->SetBinContent(938,0.875);
   h_yCaloMeanSubRunAvg_13__38->SetBinContent(939,0.4583333);
   h_yCaloMeanSubRunAvg_13__38->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_13__38->SetBinError(936,0.07216878);
   h_yCaloMeanSubRunAvg_13__38->SetBinError(937,0.1717961);
   h_yCaloMeanSubRunAvg_13__38->SetBinError(938,0.1909407);
   h_yCaloMeanSubRunAvg_13__38->SetBinError(939,0.1381927);
   h_yCaloMeanSubRunAvg_13__38->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_13__38->SetEntries(61);
   h_yCaloMeanSubRunAvg_13__38->SetStats(0);

   ci = TColor::GetColor("#3bb89c");
   h_yCaloMeanSubRunAvg_13__38->SetLineColor(ci);

   ci = TColor::GetColor("#3bb89c");
   h_yCaloMeanSubRunAvg_13__38->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_13__38->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_13__38->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_13__38->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_13__38->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_13__38->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_13__38->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_13__38->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_13__38->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_13__38->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_13__38->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_14__39 = new TH1D("h_yCaloMeanSubRunAvg_14__39","",1875,-75,75);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(936,0.3333333);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(937,0.7083333);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(938,0.7083333);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(939,0.2083333);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(940,0.5);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(941,0.04166667);
   h_yCaloMeanSubRunAvg_14__39->SetBinContent(942,0.04166667);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(936,0.1178511);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(937,0.1717961);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(938,0.1717961);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(939,0.0931695);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(940,0.1443376);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(941,0.04166667);
   h_yCaloMeanSubRunAvg_14__39->SetBinError(942,0.04166667);
   h_yCaloMeanSubRunAvg_14__39->SetEntries(61);
   h_yCaloMeanSubRunAvg_14__39->SetStats(0);

   ci = TColor::GetColor("#5abb8d");
   h_yCaloMeanSubRunAvg_14__39->SetLineColor(ci);

   ci = TColor::GetColor("#5abb8d");
   h_yCaloMeanSubRunAvg_14__39->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_14__39->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_14__39->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_14__39->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_14__39->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_14__39->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_14__39->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_14__39->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_14__39->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_14__39->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_14__39->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_15__40 = new TH1D("h_yCaloMeanSubRunAvg_15__40","",1875,-75,75);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(936,0.4166667);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(937,0.5416667);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(938,0.7916667);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(939,0.3333333);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(940,0.3333333);
   h_yCaloMeanSubRunAvg_15__40->SetBinContent(941,0.125);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(936,0.1317616);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(937,0.1502313);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(938,0.1816208);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(939,0.1178511);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(940,0.1178511);
   h_yCaloMeanSubRunAvg_15__40->SetBinError(941,0.07216878);
   h_yCaloMeanSubRunAvg_15__40->SetEntries(61);
   h_yCaloMeanSubRunAvg_15__40->SetStats(0);

   ci = TColor::GetColor("#79bd7d");
   h_yCaloMeanSubRunAvg_15__40->SetLineColor(ci);

   ci = TColor::GetColor("#79bd7d");
   h_yCaloMeanSubRunAvg_15__40->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_15__40->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_15__40->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_15__40->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_15__40->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_15__40->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_15__40->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_15__40->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_15__40->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_15__40->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_15__40->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_16__41 = new TH1D("h_yCaloMeanSubRunAvg_16__41","",1875,-75,75);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(936,0.375);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(937,0.75);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(938,0.5833333);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(939,0.4166667);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(940,0.3333333);
   h_yCaloMeanSubRunAvg_16__41->SetBinContent(941,0.08333333);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(936,0.125);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(937,0.1767767);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(938,0.1559024);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(939,0.1317616);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(940,0.1178511);
   h_yCaloMeanSubRunAvg_16__41->SetBinError(941,0.05892557);
   h_yCaloMeanSubRunAvg_16__41->SetEntries(61);
   h_yCaloMeanSubRunAvg_16__41->SetStats(0);

   ci = TColor::GetColor("#94be71");
   h_yCaloMeanSubRunAvg_16__41->SetLineColor(ci);

   ci = TColor::GetColor("#94be71");
   h_yCaloMeanSubRunAvg_16__41->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_16__41->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_16__41->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_16__41->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_16__41->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_16__41->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_16__41->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_16__41->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_16__41->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_16__41->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_16__41->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_17__42 = new TH1D("h_yCaloMeanSubRunAvg_17__42","",1875,-75,75);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(936,0.4166667);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(937,0.75);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(938,0.7083333);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(939,0.1666667);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(940,0.4583333);
   h_yCaloMeanSubRunAvg_17__42->SetBinContent(941,0.04166667);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(936,0.1317616);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(937,0.1767767);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(938,0.1717961);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(939,0.08333333);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(940,0.1381927);
   h_yCaloMeanSubRunAvg_17__42->SetBinError(941,0.04166667);
   h_yCaloMeanSubRunAvg_17__42->SetEntries(61);
   h_yCaloMeanSubRunAvg_17__42->SetStats(0);

   ci = TColor::GetColor("#aebc67");
   h_yCaloMeanSubRunAvg_17__42->SetLineColor(ci);

   ci = TColor::GetColor("#aebc67");
   h_yCaloMeanSubRunAvg_17__42->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_17__42->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_17__42->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_17__42->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_17__42->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_17__42->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_17__42->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_17__42->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_17__42->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_17__42->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_17__42->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_18__43 = new TH1D("h_yCaloMeanSubRunAvg_18__43","",1875,-75,75);
   h_yCaloMeanSubRunAvg_18__43->SetBinContent(936,0.375);
   h_yCaloMeanSubRunAvg_18__43->SetBinContent(937,0.625);
   h_yCaloMeanSubRunAvg_18__43->SetBinContent(938,0.6666667);
   h_yCaloMeanSubRunAvg_18__43->SetBinContent(939,0.4583333);
   h_yCaloMeanSubRunAvg_18__43->SetBinContent(940,0.4166667);
   h_yCaloMeanSubRunAvg_18__43->SetBinError(936,0.125);
   h_yCaloMeanSubRunAvg_18__43->SetBinError(937,0.1613743);
   h_yCaloMeanSubRunAvg_18__43->SetBinError(938,0.1666667);
   h_yCaloMeanSubRunAvg_18__43->SetBinError(939,0.1381927);
   h_yCaloMeanSubRunAvg_18__43->SetBinError(940,0.1317616);
   h_yCaloMeanSubRunAvg_18__43->SetEntries(61);
   h_yCaloMeanSubRunAvg_18__43->SetStats(0);

   ci = TColor::GetColor("#c7bb5c");
   h_yCaloMeanSubRunAvg_18__43->SetLineColor(ci);

   ci = TColor::GetColor("#c7bb5c");
   h_yCaloMeanSubRunAvg_18__43->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_18__43->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_18__43->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_18__43->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_18__43->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_18__43->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_18__43->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_18__43->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_18__43->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_18__43->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_18__43->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_19__44 = new TH1D("h_yCaloMeanSubRunAvg_19__44","",1875,-75,75);
   h_yCaloMeanSubRunAvg_19__44->SetBinContent(936,0.04166667);
   h_yCaloMeanSubRunAvg_19__44->SetBinContent(937,0.9166667);
   h_yCaloMeanSubRunAvg_19__44->SetBinContent(938,0.8333333);
   h_yCaloMeanSubRunAvg_19__44->SetBinContent(939,0.4166667);
   h_yCaloMeanSubRunAvg_19__44->SetBinContent(940,0.3333333);
   h_yCaloMeanSubRunAvg_19__44->SetBinError(936,0.04166667);
   h_yCaloMeanSubRunAvg_19__44->SetBinError(937,0.195434);
   h_yCaloMeanSubRunAvg_19__44->SetBinError(938,0.186339);
   h_yCaloMeanSubRunAvg_19__44->SetBinError(939,0.1317616);
   h_yCaloMeanSubRunAvg_19__44->SetBinError(940,0.1178511);
   h_yCaloMeanSubRunAvg_19__44->SetEntries(61);
   h_yCaloMeanSubRunAvg_19__44->SetStats(0);

   ci = TColor::GetColor("#dabd50");
   h_yCaloMeanSubRunAvg_19__44->SetLineColor(ci);

   ci = TColor::GetColor("#dabd50");
   h_yCaloMeanSubRunAvg_19__44->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_19__44->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_19__44->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_19__44->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_19__44->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_19__44->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_19__44->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_19__44->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_19__44->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_19__44->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_19__44->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_20__45 = new TH1D("h_yCaloMeanSubRunAvg_20__45","",1875,-75,75);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(935,0.04166667);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(936,0.3333333);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(937,0.6666667);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(938,0.75);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(939,0.2083333);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_20__45->SetBinContent(941,0.1666667);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(935,0.04166667);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(936,0.1178511);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(937,0.1666667);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(938,0.1767767);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(939,0.0931695);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_20__45->SetBinError(941,0.08333333);
   h_yCaloMeanSubRunAvg_20__45->SetEntries(61);
   h_yCaloMeanSubRunAvg_20__45->SetStats(0);

   ci = TColor::GetColor("#eac243");
   h_yCaloMeanSubRunAvg_20__45->SetLineColor(ci);

   ci = TColor::GetColor("#eac243");
   h_yCaloMeanSubRunAvg_20__45->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_20__45->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_20__45->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_20__45->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_20__45->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_20__45->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_20__45->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_20__45->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_20__45->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_20__45->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_20__45->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_21__46 = new TH1D("h_yCaloMeanSubRunAvg_21__46","",1875,-75,75);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(935,0.04166667);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(936,0.4166667);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(937,0.5833333);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(938,0.5833333);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(939,0.375);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_21__46->SetBinContent(941,0.1666667);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(935,0.04166667);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(936,0.1317616);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(937,0.1559024);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(938,0.1559024);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(939,0.125);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_21__46->SetBinError(941,0.08333333);
   h_yCaloMeanSubRunAvg_21__46->SetEntries(61);
   h_yCaloMeanSubRunAvg_21__46->SetStats(0);

   ci = TColor::GetColor("#f9c735");
   h_yCaloMeanSubRunAvg_21__46->SetLineColor(ci);

   ci = TColor::GetColor("#f9c735");
   h_yCaloMeanSubRunAvg_21__46->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_21__46->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_21__46->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_21__46->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_21__46->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_21__46->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_21__46->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_21__46->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_21__46->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_21__46->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_21__46->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_22__47 = new TH1D("h_yCaloMeanSubRunAvg_22__47","",1875,-75,75);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(936,0.375);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(937,0.6666667);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(938,0.5416667);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(939,0.4583333);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(940,0.4583333);
   h_yCaloMeanSubRunAvg_22__47->SetBinContent(941,0.04166667);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(936,0.125);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(937,0.1666667);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(938,0.1502313);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(939,0.1381927);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(940,0.1381927);
   h_yCaloMeanSubRunAvg_22__47->SetBinError(941,0.04166667);
   h_yCaloMeanSubRunAvg_22__47->SetEntries(61);
   h_yCaloMeanSubRunAvg_22__47->SetStats(0);

   ci = TColor::GetColor("#fcd529");
   h_yCaloMeanSubRunAvg_22__47->SetLineColor(ci);

   ci = TColor::GetColor("#fcd529");
   h_yCaloMeanSubRunAvg_22__47->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_22__47->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_22__47->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_22__47->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_22__47->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_22__47->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_22__47->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_22__47->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_22__47->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_22__47->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_22__47->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_23__48 = new TH1D("h_yCaloMeanSubRunAvg_23__48","",1875,-75,75);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(936,0.25);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(937,0.9166667);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(938,0.5416667);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(939,0.3333333);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(940,0.375);
   h_yCaloMeanSubRunAvg_23__48->SetBinContent(941,0.125);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(936,0.1020621);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(937,0.195434);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(938,0.1502313);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(939,0.1178511);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(940,0.125);
   h_yCaloMeanSubRunAvg_23__48->SetBinError(941,0.07216878);
   h_yCaloMeanSubRunAvg_23__48->SetEntries(61);
   h_yCaloMeanSubRunAvg_23__48->SetStats(0);

   ci = TColor::GetColor("#fae61c");
   h_yCaloMeanSubRunAvg_23__48->SetLineColor(ci);

   ci = TColor::GetColor("#fae61c");
   h_yCaloMeanSubRunAvg_23__48->SetMarkerColor(ci);
   h_yCaloMeanSubRunAvg_23__48->GetXaxis()->SetRange(1,15000);
   h_yCaloMeanSubRunAvg_23__48->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_23__48->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetXaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_23__48->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_23__48->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetYaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetYaxis()->SetTitleOffset(0);
   h_yCaloMeanSubRunAvg_23__48->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_23__48->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_23__48->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_23__48->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_23__48->Draw("HIST PLC PMC SAME");
   
   TH1D *h_yCaloMeanSubRunAvg_1__49 = new TH1D("h_yCaloMeanSubRunAvg_1__49","",1875,-75,75);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(934,0.001736111);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(935,0.006944444);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(936,0.578125);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(937,1.503472);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(938,1.074653);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(939,0.8871528);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(940,0.7569444);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(941,0.1666667);
   h_yCaloMeanSubRunAvg_1__49->SetBinContent(942,0.001736111);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(934,0.001736111);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(935,0.003472222);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(936,0.1048157);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(937,0.1894351);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(938,0.1420113);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(939,0.1522145);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(940,0.1276248);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(941,0.06014065);
   h_yCaloMeanSubRunAvg_1__49->SetBinError(942,0.001736111);
   h_yCaloMeanSubRunAvg_1__49->SetEntries(1464);

   ci = TColor::GetColor("#ff0000");
   h_yCaloMeanSubRunAvg_1__49->SetFillColor(ci);
   h_yCaloMeanSubRunAvg_1__49->SetFillStyle(3644);

   ci = TColor::GetColor("#ff0000");
   h_yCaloMeanSubRunAvg_1__49->SetLineColor(ci);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetTitle("Mean subtracted #LTy_{calo}#GT [mm]");
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetRange(876,1000);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->CenterTitle(true);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetTitleOffset(1.1);
   h_yCaloMeanSubRunAvg_1__49->GetXaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetTitle("Arb. Units");
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->CenterTitle(true);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetNdivisions(4000510);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetTitleOffset(1.1);
   h_yCaloMeanSubRunAvg_1__49->GetYaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__49->GetZaxis()->SetLabelFont(42);
   h_yCaloMeanSubRunAvg_1__49->GetZaxis()->SetLabelSize(0.035);
   h_yCaloMeanSubRunAvg_1__49->GetZaxis()->SetTitleSize(0.035);
   h_yCaloMeanSubRunAvg_1__49->GetZaxis()->SetTitleFont(42);
   h_yCaloMeanSubRunAvg_1__49->Draw("HIST L2F SAME");
   
   TPaveText *pt = new TPaveText(0.61,0.69,0.69,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("#sigma_{total} = 0.11
#pm0.005
 mm");
   pt->Draw();
   TLine *line = new TLine(-5,0,5,0);
   line->Draw();
   
   TLegend *leg = new TLegend(0.81,0.15,0.99,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_yCaloMeanSubRunAvg_1","Total","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3644);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_1","Calo 1","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#352a86");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#352a86");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_2","Calo 2","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#273ba5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#273ba5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_3","Calo 3","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1a4dc4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_4","Calo 4","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0f5edc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0f5edc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_5","Calo 5","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#116ada");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#116ada");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_6","Calo 6","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1277d7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1277d7");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_7","Calo 7","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#1283d4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#1283d4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_8","Calo 8","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0d8fd0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_9","Calo 9","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#089bcc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#089bcc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_10","Calo 10","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0aa6c5");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_11","Calo 11","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#18acb8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#18acb8");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_12","Calo 12","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#26b3aa");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#26b3aa");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_13","Calo 13","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3bb89c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3bb89c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_14","Calo 14","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#5abb8d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#5abb8d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_15","Calo 15","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#79bd7d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#79bd7d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_16","Calo 16","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#94be71");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#94be71");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_17","Calo 17","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#aebc67");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#aebc67");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_18","Calo 18","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#c7bb5c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_19","Calo 19","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#dabd50");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#dabd50");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_20","Calo 20","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#eac243");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#eac243");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_21","Calo 21","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f9c735");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f9c735");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_22","Calo 22","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#fcd529");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fcd529");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_yCaloMeanSubRunAvg_23","Calo 23","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#fae61c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#fae61c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
