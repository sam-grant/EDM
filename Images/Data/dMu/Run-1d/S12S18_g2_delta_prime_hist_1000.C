void S12S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__90 = new TH1D("h__90","",50,-0.4566652,0.5589929);
   h__90->SetBinContent(25,98);
   h__90->SetBinContent(26,888);
   h__90->SetBinContent(27,14);
   h__90->SetEntries(1000);
   h__90->SetStats(0);
   h__90->SetLineWidth(3);
   h__90->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__90->GetXaxis()->CenterTitle(true);
   h__90->GetXaxis()->SetLabelFont(42);
   h__90->GetXaxis()->SetTitleSize(0.04);
   h__90->GetXaxis()->SetTitleOffset(1.1);
   h__90->GetXaxis()->SetTitleFont(42);
   h__90->GetYaxis()->SetTitle("Trials");
   h__90->GetYaxis()->CenterTitle(true);
   h__90->GetYaxis()->SetNdivisions(4000510);
   h__90->GetYaxis()->SetLabelFont(42);
   h__90->GetYaxis()->SetTitleSize(0.04);
   h__90->GetYaxis()->SetTitleOffset(1.1);
   h__90->GetYaxis()->SetTitleFont(42);
   h__90->GetZaxis()->SetLabelFont(42);
   h__90->GetZaxis()->SetTitleOffset(1);
   h__90->GetZaxis()->SetTitleFont(42);
   h__90->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.05859
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0058
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
