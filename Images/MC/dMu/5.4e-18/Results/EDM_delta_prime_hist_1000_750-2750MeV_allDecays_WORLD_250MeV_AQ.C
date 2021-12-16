void EDM_delta_prime_hist_1000_750-2750MeV_allDecays_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__3 = new TH1D("h__3","",54,1.152712,2.24776);
   h__3->SetBinContent(23,6);
   h__3->SetBinContent(24,29);
   h__3->SetBinContent(25,91);
   h__3->SetBinContent(26,166);
   h__3->SetBinContent(27,243);
   h__3->SetBinContent(28,233);
   h__3->SetBinContent(29,139);
   h__3->SetBinContent(30,61);
   h__3->SetBinContent(31,28);
   h__3->SetBinContent(32,1);
   h__3->SetBinContent(33,2);
   h__3->SetBinContent(34,1);
   h__3->SetEntries(1000);
   h__3->SetStats(0);
   h__3->SetLineWidth(3);
   h__3->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__3->GetXaxis()->CenterTitle(true);
   h__3->GetXaxis()->SetLabelFont(42);
   h__3->GetXaxis()->SetTitleSize(0.04);
   h__3->GetXaxis()->SetTitleOffset(1.1);
   h__3->GetXaxis()->SetTitleFont(42);
   h__3->GetYaxis()->SetTitle("Trials");
   h__3->GetYaxis()->CenterTitle(true);
   h__3->GetYaxis()->SetNdivisions(4000510);
   h__3->GetYaxis()->SetLabelFont(42);
   h__3->GetYaxis()->SetTitleSize(0.04);
   h__3->GetYaxis()->SetTitleOffset(1.1);
   h__3->GetYaxis()->SetTitleFont(42);
   h__3->GetZaxis()->SetLabelFont(42);
   h__3->GetZaxis()->SetTitleOffset(1);
   h__3->GetZaxis()->SetTitleFont(42);
   h__3->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.697
#pm0.001
");
   pt_LaTex = pt->AddText("0.033
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
