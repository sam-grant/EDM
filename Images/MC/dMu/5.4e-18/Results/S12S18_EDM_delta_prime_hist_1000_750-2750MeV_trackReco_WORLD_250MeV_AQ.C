void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:48:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__46 = new TH1D("h__46","",56,1.127689,2.2638);
   h__46->SetBinContent(23,6);
   h__46->SetBinContent(24,15);
   h__46->SetBinContent(25,48);
   h__46->SetBinContent(26,91);
   h__46->SetBinContent(27,156);
   h__46->SetBinContent(28,176);
   h__46->SetBinContent(29,210);
   h__46->SetBinContent(30,133);
   h__46->SetBinContent(31,77);
   h__46->SetBinContent(32,60);
   h__46->SetBinContent(33,20);
   h__46->SetBinContent(34,4);
   h__46->SetBinContent(35,1);
   h__46->SetBinContent(36,2);
   h__46->SetBinContent(38,1);
   h__46->SetEntries(1000);
   h__46->SetStats(0);
   h__46->SetLineWidth(3);
   h__46->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__46->GetXaxis()->CenterTitle(true);
   h__46->GetXaxis()->SetLabelFont(42);
   h__46->GetXaxis()->SetTitleSize(0.04);
   h__46->GetXaxis()->SetTitleOffset(1.1);
   h__46->GetXaxis()->SetTitleFont(42);
   h__46->GetYaxis()->SetTitle("Trials");
   h__46->GetYaxis()->CenterTitle(true);
   h__46->GetYaxis()->SetNdivisions(4000510);
   h__46->GetYaxis()->SetLabelFont(42);
   h__46->GetYaxis()->SetTitleSize(0.04);
   h__46->GetYaxis()->SetTitleOffset(1.1);
   h__46->GetYaxis()->SetTitleFont(42);
   h__46->GetZaxis()->SetLabelFont(42);
   h__46->GetZaxis()->SetTitleOffset(1);
   h__46->GetZaxis()->SetTitleFont(42);
   h__46->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.696
#pm0.001
");
   pt_LaTex = pt->AddText("0.042
#pm0.0009
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
