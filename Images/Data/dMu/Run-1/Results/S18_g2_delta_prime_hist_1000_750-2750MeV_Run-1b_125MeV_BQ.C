void S18_g2_delta_prime_hist_1000_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__11 = new TH1D("h__11","S18",20,-0.3299591,0.08586664);
   h__11->SetBinContent(0,41);
   h__11->SetBinContent(1,4);
   h__11->SetBinContent(2,16);
   h__11->SetBinContent(3,17);
   h__11->SetBinContent(4,24);
   h__11->SetBinContent(5,39);
   h__11->SetBinContent(6,56);
   h__11->SetBinContent(7,61);
   h__11->SetBinContent(8,88);
   h__11->SetBinContent(9,113);
   h__11->SetBinContent(10,168);
   h__11->SetBinContent(11,248);
   h__11->SetBinContent(12,64);
   h__11->SetBinContent(13,5);
   h__11->SetBinContent(14,10);
   h__11->SetBinContent(15,19);
   h__11->SetBinContent(16,6);
   h__11->SetBinContent(17,1);
   h__11->SetBinContent(18,1);
   h__11->SetBinContent(19,7);
   h__11->SetBinContent(20,2);
   h__11->SetBinContent(21,10);
   h__11->SetEntries(1000);
   h__11->SetStats(0);
   h__11->SetLineWidth(3);
   h__11->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__11->GetXaxis()->CenterTitle(true);
   h__11->GetXaxis()->SetLabelFont(42);
   h__11->GetXaxis()->SetTitleSize(0.04);
   h__11->GetXaxis()->SetTitleOffset(1.1);
   h__11->GetXaxis()->SetTitleFont(42);
   h__11->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__11->GetYaxis()->CenterTitle(true);
   h__11->GetYaxis()->SetNdivisions(4000510);
   h__11->GetYaxis()->SetLabelFont(42);
   h__11->GetYaxis()->SetTitleSize(0.04);
   h__11->GetYaxis()->SetTitleOffset(1.1);
   h__11->GetYaxis()->SetTitleFont(42);
   h__11->GetZaxis()->SetLabelFont(42);
   h__11->GetZaxis()->SetTitleOffset(1);
   h__11->GetZaxis()->SetTitleFont(42);
   h__11->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.1471
#pm0.002
");
   pt_LaTex = pt->AddText("0.059
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
