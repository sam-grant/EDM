void EDM_delta_prime_hist_1000_1000-2750MeV_allDecays_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 19 23:56:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","",51,1.310787,2.332887);
   h__1->SetBinContent(21,1);
   h__1->SetBinContent(22,3);
   h__1->SetBinContent(23,25);
   h__1->SetBinContent(24,110);
   h__1->SetBinContent(25,192);
   h__1->SetBinContent(26,261);
   h__1->SetBinContent(27,221);
   h__1->SetBinContent(28,134);
   h__1->SetBinContent(29,40);
   h__1->SetBinContent(30,11);
   h__1->SetBinContent(32,1);
   h__1->SetBinContent(33,1);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Trials");
   h__1->GetYaxis()->CenterTitle(true);
   h__1->GetYaxis()->SetNdivisions(4000510);
   h__1->GetYaxis()->SetLabelFont(42);
   h__1->GetYaxis()->SetTitleSize(0.04);
   h__1->GetYaxis()->SetTitleOffset(1.1);
   h__1->GetYaxis()->SetTitleFont(42);
   h__1->GetZaxis()->SetLabelFont(42);
   h__1->GetZaxis()->SetTitleOffset(1);
   h__1->GetZaxis()->SetTitleFont(42);
   h__1->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.825
#pm0.0009
");
   pt_LaTex = pt->AddText("0.03
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
