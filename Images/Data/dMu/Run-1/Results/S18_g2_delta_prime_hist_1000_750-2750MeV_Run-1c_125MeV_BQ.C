void S18_g2_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 11:00:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__17 = new TH1D("h__17","S18",21,-0.3066296,0.1199437);
   h__17->SetBinContent(9,5);
   h__17->SetBinContent(10,61);
   h__17->SetBinContent(11,290);
   h__17->SetBinContent(12,459);
   h__17->SetBinContent(13,174);
   h__17->SetBinContent(14,11);
   h__17->SetEntries(1000);
   h__17->SetStats(0);
   h__17->SetLineWidth(3);
   h__17->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__17->GetXaxis()->CenterTitle(true);
   h__17->GetXaxis()->SetLabelFont(42);
   h__17->GetXaxis()->SetTitleSize(0.04);
   h__17->GetXaxis()->SetTitleOffset(1.1);
   h__17->GetXaxis()->SetTitleFont(42);
   h__17->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__17->GetYaxis()->CenterTitle(true);
   h__17->GetYaxis()->SetNdivisions(4000510);
   h__17->GetYaxis()->SetLabelFont(42);
   h__17->GetYaxis()->SetTitleSize(0.04);
   h__17->GetYaxis()->SetTitleOffset(1.1);
   h__17->GetYaxis()->SetTitleFont(42);
   h__17->GetZaxis()->SetLabelFont(42);
   h__17->GetZaxis()->SetTitleOffset(1);
   h__17->GetZaxis()->SetTitleFont(42);
   h__17->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.07786
#pm0.0005
");
   pt_LaTex = pt->AddText("0.017
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
