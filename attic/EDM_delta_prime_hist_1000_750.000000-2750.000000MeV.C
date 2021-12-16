void EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__5 = new TH1D("h__5","",72,2.07222,3.519841);
   h__5->SetBinContent(20,1);
   h__5->SetBinContent(21,1);
   h__5->SetBinContent(22,1);
   h__5->SetBinContent(23,1);
   h__5->SetBinContent(24,4);
   h__5->SetBinContent(25,6);
   h__5->SetBinContent(26,12);
   h__5->SetBinContent(27,5);
   h__5->SetBinContent(28,17);
   h__5->SetBinContent(29,16);
   h__5->SetBinContent(30,34);
   h__5->SetBinContent(31,19);
   h__5->SetBinContent(32,49);
   h__5->SetBinContent(33,40);
   h__5->SetBinContent(34,46);
   h__5->SetBinContent(35,43);
   h__5->SetBinContent(36,67);
   h__5->SetBinContent(37,61);
   h__5->SetBinContent(38,47);
   h__5->SetBinContent(39,56);
   h__5->SetBinContent(40,58);
   h__5->SetBinContent(41,57);
   h__5->SetBinContent(42,45);
   h__5->SetBinContent(43,60);
   h__5->SetBinContent(44,37);
   h__5->SetBinContent(45,31);
   h__5->SetBinContent(46,38);
   h__5->SetBinContent(47,30);
   h__5->SetBinContent(48,27);
   h__5->SetBinContent(49,22);
   h__5->SetBinContent(50,18);
   h__5->SetBinContent(51,12);
   h__5->SetBinContent(52,11);
   h__5->SetBinContent(53,8);
   h__5->SetBinContent(54,4);
   h__5->SetBinContent(55,4);
   h__5->SetBinContent(56,2);
   h__5->SetBinContent(57,2);
   h__5->SetBinContent(58,1);
   h__5->SetBinContent(59,2);
   h__5->SetBinContent(60,1);
   h__5->SetBinContent(62,2);
   h__5->SetBinContent(63,1);
   h__5->SetBinContent(70,1);
   h__5->SetEntries(1000);
   h__5->SetStats(0);
   h__5->SetLineWidth(3);
   h__5->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__5->GetXaxis()->CenterTitle(true);
   h__5->GetXaxis()->SetLabelFont(42);
   h__5->GetXaxis()->SetTitleSize(0.04);
   h__5->GetXaxis()->SetTitleOffset(1.1);
   h__5->GetXaxis()->SetTitleFont(42);
   h__5->GetYaxis()->SetTitle("Trials");
   h__5->GetYaxis()->CenterTitle(true);
   h__5->GetYaxis()->SetNdivisions(4000510);
   h__5->GetYaxis()->SetLabelFont(42);
   h__5->GetYaxis()->SetTitleSize(0.04);
   h__5->GetYaxis()->SetTitleOffset(1.1);
   h__5->GetYaxis()->SetTitleFont(42);
   h__5->GetZaxis()->SetLabelFont(42);
   h__5->GetZaxis()->SetTitleOffset(1);
   h__5->GetZaxis()->SetTitleFont(42);
   h__5->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("2.851
#pm0.004
");
   pt_LaTex = pt->AddText("0.14
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
