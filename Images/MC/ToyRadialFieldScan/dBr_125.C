void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 125",300,0,3);
   __9->SetBinContent(68,2);
   __9->SetBinContent(69,1);
   __9->SetBinContent(70,16);
   __9->SetBinContent(71,44);
   __9->SetBinContent(72,66);
   __9->SetBinContent(73,103);
   __9->SetBinContent(74,154);
   __9->SetBinContent(75,169);
   __9->SetBinContent(76,143);
   __9->SetBinContent(77,121);
   __9->SetBinContent(78,72);
   __9->SetBinContent(79,50);
   __9->SetBinContent(80,29);
   __9->SetBinContent(81,17);
   __9->SetBinContent(82,6);
   __9->SetBinContent(83,4);
   __9->SetBinContent(84,3);
   __9->SetEntries(1000);
   __9->SetLineWidth(3);
   __9->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Experiments");
   __9->GetYaxis()->CenterTitle(true);
   __9->GetYaxis()->SetNdivisions(4000510);
   __9->GetYaxis()->SetLabelFont(42);
   __9->GetYaxis()->SetTitleSize(0.04);
   __9->GetYaxis()->SetTitleOffset(1.1);
   __9->GetYaxis()->SetTitleFont(42);
   __9->GetZaxis()->SetLabelFont(42);
   __9->GetZaxis()->SetTitleOffset(1);
   __9->GetZaxis()->SetTitleFont(42);
   __9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
