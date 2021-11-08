void S12S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__78 = new TH1D("h__78","",50,-0.5427816,0.4641214);
   h__78->SetBinContent(25,358);
   h__78->SetBinContent(26,642);
   h__78->SetEntries(1000);
   h__78->SetStats(0);
   h__78->SetLineWidth(3);
   h__78->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__78->GetXaxis()->CenterTitle(true);
   h__78->GetXaxis()->SetLabelFont(42);
   h__78->GetXaxis()->SetTitleSize(0.04);
   h__78->GetXaxis()->SetTitleOffset(1.1);
   h__78->GetXaxis()->SetTitleFont(42);
   h__78->GetYaxis()->SetTitle("Trials");
   h__78->GetYaxis()->CenterTitle(true);
   h__78->GetYaxis()->SetNdivisions(4000510);
   h__78->GetYaxis()->SetLabelFont(42);
   h__78->GetYaxis()->SetTitleSize(0.04);
   h__78->GetYaxis()->SetTitleOffset(1.1);
   h__78->GetYaxis()->SetTitleFont(42);
   h__78->GetZaxis()->SetLabelFont(42);
   h__78->GetZaxis()->SetTitleOffset(1);
   h__78->GetZaxis()->SetTitleFont(42);
   h__78->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.03756
#pm0.0002
");
   pt_LaTex = pt->AddText("0.005
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
