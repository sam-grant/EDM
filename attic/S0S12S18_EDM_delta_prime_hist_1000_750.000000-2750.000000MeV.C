void S0S12S18_EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__11 = new TH1D("h__11","",60,-1.985186,-0.7793668);
   h__11->SetBinContent(18,1);
   h__11->SetBinContent(21,4);
   h__11->SetBinContent(22,1);
   h__11->SetBinContent(23,3);
   h__11->SetBinContent(24,6);
   h__11->SetBinContent(25,16);
   h__11->SetBinContent(26,19);
   h__11->SetBinContent(27,28);
   h__11->SetBinContent(28,25);
   h__11->SetBinContent(29,41);
   h__11->SetBinContent(30,59);
   h__11->SetBinContent(31,75);
   h__11->SetBinContent(32,83);
   h__11->SetBinContent(33,104);
   h__11->SetBinContent(34,112);
   h__11->SetBinContent(35,94);
   h__11->SetBinContent(36,88);
   h__11->SetBinContent(37,69);
   h__11->SetBinContent(38,56);
   h__11->SetBinContent(39,46);
   h__11->SetBinContent(40,36);
   h__11->SetBinContent(41,17);
   h__11->SetBinContent(42,9);
   h__11->SetBinContent(43,8);
   h__11->SetEntries(1000);
   h__11->SetStats(0);
   h__11->SetLineWidth(3);
   h__11->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__11->GetXaxis()->CenterTitle(true);
   h__11->GetXaxis()->SetLabelFont(42);
   h__11->GetXaxis()->SetTitleSize(0.04);
   h__11->GetXaxis()->SetTitleOffset(1.1);
   h__11->GetXaxis()->SetTitleFont(42);
   h__11->GetYaxis()->SetTitle("Trials");
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
   pt_LaTex = pt->AddText("-1.319
#pm0.003
");
   pt_LaTex = pt->AddText("0.081
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
