void S12_EDM_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__24 = new TH1D("h__24","",54,1.201185,2.296075);
   h__24->SetBinContent(22,5);
   h__24->SetBinContent(23,49);
   h__24->SetBinContent(24,214);
   h__24->SetBinContent(25,304);
   h__24->SetBinContent(26,218);
   h__24->SetBinContent(27,119);
   h__24->SetBinContent(28,53);
   h__24->SetBinContent(29,19);
   h__24->SetBinContent(30,11);
   h__24->SetBinContent(31,1);
   h__24->SetBinContent(32,3);
   h__24->SetBinContent(33,2);
   h__24->SetBinContent(34,1);
   h__24->SetBinContent(39,1);
   h__24->SetEntries(1000);
   h__24->SetStats(0);
   h__24->SetLineWidth(3);
   h__24->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__24->GetXaxis()->CenterTitle(true);
   h__24->GetXaxis()->SetLabelFont(42);
   h__24->GetXaxis()->SetTitleSize(0.04);
   h__24->GetXaxis()->SetTitleOffset(1.1);
   h__24->GetXaxis()->SetTitleFont(42);
   h__24->GetYaxis()->SetTitle("Trials");
   h__24->GetYaxis()->CenterTitle(true);
   h__24->GetYaxis()->SetNdivisions(4000510);
   h__24->GetYaxis()->SetLabelFont(42);
   h__24->GetYaxis()->SetTitleSize(0.04);
   h__24->GetYaxis()->SetTitleOffset(1.1);
   h__24->GetYaxis()->SetTitleFont(42);
   h__24->GetZaxis()->SetLabelFont(42);
   h__24->GetZaxis()->SetTitleOffset(1);
   h__24->GetZaxis()->SetTitleFont(42);
   h__24->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.708
#pm0.001
");
   pt_LaTex = pt->AddText("0.032
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
