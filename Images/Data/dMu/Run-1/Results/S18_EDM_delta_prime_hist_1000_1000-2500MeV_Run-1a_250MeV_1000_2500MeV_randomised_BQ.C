void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__2 = new TH1D("h__2","S18",32,-0.07163808,0.2495935);
   h__2->SetBinContent(7,1);
   h__2->SetBinContent(8,6);
   h__2->SetBinContent(9,13);
   h__2->SetBinContent(10,48);
   h__2->SetBinContent(11,83);
   h__2->SetBinContent(12,125);
   h__2->SetBinContent(13,170);
   h__2->SetBinContent(14,160);
   h__2->SetBinContent(15,179);
   h__2->SetBinContent(16,109);
   h__2->SetBinContent(17,69);
   h__2->SetBinContent(18,18);
   h__2->SetBinContent(19,12);
   h__2->SetBinContent(20,5);
   h__2->SetBinContent(21,2);
   h__2->SetEntries(1000);
   h__2->SetStats(0);
   h__2->SetLineWidth(3);
   h__2->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__2->GetXaxis()->CenterTitle(true);
   h__2->GetXaxis()->SetLabelFont(42);
   h__2->GetXaxis()->SetTitleSize(0.04);
   h__2->GetXaxis()->SetTitleOffset(1.1);
   h__2->GetXaxis()->SetTitleFont(42);
   h__2->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__2->GetYaxis()->CenterTitle(true);
   h__2->GetYaxis()->SetNdivisions(4000510);
   h__2->GetYaxis()->SetLabelFont(42);
   h__2->GetYaxis()->SetTitleSize(0.04);
   h__2->GetYaxis()->SetTitleOffset(1.1);
   h__2->GetYaxis()->SetTitleFont(42);
   h__2->GetZaxis()->SetLabelFont(42);
   h__2->GetZaxis()->SetTitleOffset(1);
   h__2->GetZaxis()->SetTitleFont(42);
   h__2->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.06214
#pm0.0007
");
   pt_LaTex = pt->AddText("0.022
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
