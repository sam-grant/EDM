void S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:44:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__35 = new TH1D("h__35","",57,1.108928,2.261416);
   h__35->SetBinContent(22,2);
   h__35->SetBinContent(23,5);
   h__35->SetBinContent(24,12);
   h__35->SetBinContent(25,41);
   h__35->SetBinContent(26,58);
   h__35->SetBinContent(27,99);
   h__35->SetBinContent(28,136);
   h__35->SetBinContent(29,148);
   h__35->SetBinContent(30,167);
   h__35->SetBinContent(31,121);
   h__35->SetBinContent(32,84);
   h__35->SetBinContent(33,54);
   h__35->SetBinContent(34,46);
   h__35->SetBinContent(35,14);
   h__35->SetBinContent(36,7);
   h__35->SetBinContent(37,2);
   h__35->SetBinContent(38,1);
   h__35->SetBinContent(39,2);
   h__35->SetBinContent(40,1);
   h__35->SetEntries(1000);
   h__35->SetStats(0);
   h__35->SetLineWidth(3);
   h__35->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__35->GetXaxis()->CenterTitle(true);
   h__35->GetXaxis()->SetLabelFont(42);
   h__35->GetXaxis()->SetTitleSize(0.04);
   h__35->GetXaxis()->SetTitleOffset(1.1);
   h__35->GetXaxis()->SetTitleFont(42);
   h__35->GetYaxis()->SetTitle("Trials");
   h__35->GetYaxis()->CenterTitle(true);
   h__35->GetYaxis()->SetNdivisions(4000510);
   h__35->GetYaxis()->SetLabelFont(42);
   h__35->GetYaxis()->SetTitleSize(0.04);
   h__35->GetYaxis()->SetTitleOffset(1.1);
   h__35->GetYaxis()->SetTitleFont(42);
   h__35->GetZaxis()->SetLabelFont(42);
   h__35->GetZaxis()->SetTitleOffset(1);
   h__35->GetZaxis()->SetTitleFont(42);
   h__35->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.696
#pm0.002
");
   pt_LaTex = pt->AddText("0.052
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
