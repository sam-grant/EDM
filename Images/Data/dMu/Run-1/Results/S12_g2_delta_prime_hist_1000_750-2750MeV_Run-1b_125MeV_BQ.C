void S12_g2_delta_prime_hist_1000_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__10 = new TH1D("h__10","S12",20,-0.2398047,0.1662852);
   h__10->SetBinContent(8,1);
   h__10->SetBinContent(9,40);
   h__10->SetBinContent(10,655);
   h__10->SetBinContent(11,285);
   h__10->SetBinContent(12,19);
   h__10->SetEntries(1000);
   h__10->SetStats(0);
   h__10->SetLineWidth(3);
   h__10->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__10->GetXaxis()->CenterTitle(true);
   h__10->GetXaxis()->SetLabelFont(42);
   h__10->GetXaxis()->SetTitleSize(0.04);
   h__10->GetXaxis()->SetTitleOffset(1.1);
   h__10->GetXaxis()->SetTitleFont(42);
   h__10->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__10->GetYaxis()->CenterTitle(true);
   h__10->GetYaxis()->SetNdivisions(4000510);
   h__10->GetYaxis()->SetLabelFont(42);
   h__10->GetYaxis()->SetTitleSize(0.04);
   h__10->GetYaxis()->SetTitleOffset(1.1);
   h__10->GetYaxis()->SetTitleFont(42);
   h__10->GetZaxis()->SetLabelFont(42);
   h__10->GetZaxis()->SetTitleOffset(1);
   h__10->GetZaxis()->SetTitleFont(42);
   h__10->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.04068
#pm0.0003
");
   pt_LaTex = pt->AddText("0.01
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
