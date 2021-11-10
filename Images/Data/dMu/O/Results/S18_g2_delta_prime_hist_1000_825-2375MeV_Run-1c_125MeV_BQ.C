void S18_g2_delta_prime_hist_1000_825-2375MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__41 = new TH1D("h__41","S18_",20,-0.2341576,0.1721331);
   h__41->SetBinContent(9,13);
   h__41->SetBinContent(10,965);
   h__41->SetBinContent(11,22);
   h__41->SetEntries(1000);
   h__41->SetStats(0);
   h__41->SetLineWidth(3);
   h__41->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__41->GetXaxis()->CenterTitle(true);
   h__41->GetXaxis()->SetLabelFont(42);
   h__41->GetXaxis()->SetTitleSize(0.04);
   h__41->GetXaxis()->SetTitleOffset(1.1);
   h__41->GetXaxis()->SetTitleFont(42);
   h__41->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__41->GetYaxis()->CenterTitle(true);
   h__41->GetYaxis()->SetNdivisions(4000510);
   h__41->GetYaxis()->SetLabelFont(42);
   h__41->GetYaxis()->SetTitleSize(0.04);
   h__41->GetYaxis()->SetTitleOffset(1.1);
   h__41->GetYaxis()->SetTitleFont(42);
   h__41->GetZaxis()->SetLabelFont(42);
   h__41->GetZaxis()->SetTitleOffset(1);
   h__41->GetZaxis()->SetTitleFont(42);
   h__41->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.03996
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0046
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
