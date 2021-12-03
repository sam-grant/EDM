void S12S18_EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__10 = new TH1D("h__10","",58,-1.766271,-0.605452);
   h__10->SetBinContent(19,1);
   h__10->SetBinContent(20,1);
   h__10->SetBinContent(21,3);
   h__10->SetBinContent(22,1);
   h__10->SetBinContent(23,5);
   h__10->SetBinContent(24,15);
   h__10->SetBinContent(25,20);
   h__10->SetBinContent(26,29);
   h__10->SetBinContent(27,35);
   h__10->SetBinContent(28,56);
   h__10->SetBinContent(29,70);
   h__10->SetBinContent(30,95);
   h__10->SetBinContent(31,124);
   h__10->SetBinContent(32,129);
   h__10->SetBinContent(33,105);
   h__10->SetBinContent(34,96);
   h__10->SetBinContent(35,72);
   h__10->SetBinContent(36,61);
   h__10->SetBinContent(37,47);
   h__10->SetBinContent(38,18);
   h__10->SetBinContent(39,15);
   h__10->SetBinContent(40,2);
   h__10->SetEntries(1000);
   h__10->SetStats(0);
   h__10->SetLineWidth(3);
   h__10->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__10->GetXaxis()->CenterTitle(true);
   h__10->GetXaxis()->SetLabelFont(42);
   h__10->GetXaxis()->SetTitleSize(0.04);
   h__10->GetXaxis()->SetTitleOffset(1.1);
   h__10->GetXaxis()->SetTitleFont(42);
   h__10->GetYaxis()->SetTitle("Trials");
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
   pt_LaTex = pt->AddText("-1.141
#pm0.002
");
   pt_LaTex = pt->AddText("0.068
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
