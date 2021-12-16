void S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__59 = new TH1D("h__59","",60,0.8212098,2.028163);
   h__59->SetBinContent(21,1);
   h__59->SetBinContent(22,4);
   h__59->SetBinContent(23,7);
   h__59->SetBinContent(24,11);
   h__59->SetBinContent(25,35);
   h__59->SetBinContent(26,51);
   h__59->SetBinContent(27,75);
   h__59->SetBinContent(28,97);
   h__59->SetBinContent(29,101);
   h__59->SetBinContent(30,117);
   h__59->SetBinContent(31,128);
   h__59->SetBinContent(32,113);
   h__59->SetBinContent(33,78);
   h__59->SetBinContent(34,58);
   h__59->SetBinContent(35,38);
   h__59->SetBinContent(36,41);
   h__59->SetBinContent(37,20);
   h__59->SetBinContent(38,12);
   h__59->SetBinContent(39,7);
   h__59->SetBinContent(40,2);
   h__59->SetBinContent(42,1);
   h__59->SetBinContent(43,1);
   h__59->SetBinContent(44,1);
   h__59->SetBinContent(46,1);
   h__59->SetEntries(1000);
   h__59->SetStats(0);
   h__59->SetLineWidth(3);
   h__59->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__59->GetXaxis()->CenterTitle(true);
   h__59->GetXaxis()->SetLabelFont(42);
   h__59->GetXaxis()->SetTitleSize(0.04);
   h__59->GetXaxis()->SetTitleOffset(1.1);
   h__59->GetXaxis()->SetTitleFont(42);
   h__59->GetYaxis()->SetTitle("Trials");
   h__59->GetYaxis()->CenterTitle(true);
   h__59->GetYaxis()->SetNdivisions(4000510);
   h__59->GetYaxis()->SetLabelFont(42);
   h__59->GetYaxis()->SetTitleSize(0.04);
   h__59->GetYaxis()->SetTitleOffset(1.1);
   h__59->GetYaxis()->SetTitleFont(42);
   h__59->GetZaxis()->SetLabelFont(42);
   h__59->GetZaxis()->SetTitleOffset(1);
   h__59->GetZaxis()->SetTitleFont(42);
   h__59->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.426
#pm0.002
");
   pt_LaTex = pt->AddText("0.068
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
