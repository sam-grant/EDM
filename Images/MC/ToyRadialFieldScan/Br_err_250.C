void Br_err_250()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:58:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",1000,0,4);
   __29->SetBinContent(109,2);
   __29->SetBinContent(110,6);
   __29->SetBinContent(111,15);
   __29->SetBinContent(112,26);
   __29->SetBinContent(113,56);
   __29->SetBinContent(114,96);
   __29->SetBinContent(115,115);
   __29->SetBinContent(116,137);
   __29->SetBinContent(117,161);
   __29->SetBinContent(118,133);
   __29->SetBinContent(119,83);
   __29->SetBinContent(120,90);
   __29->SetBinContent(121,33);
   __29->SetBinContent(122,27);
   __29->SetBinContent(123,13);
   __29->SetBinContent(124,3);
   __29->SetBinContent(125,3);
   __29->SetBinContent(126,1);
   __29->SetEntries(1000);
   __29->SetLineWidth(3);
   __29->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __29->GetXaxis()->CenterTitle(true);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleSize(0.04);
   __29->GetXaxis()->SetTitleOffset(1.1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetTitle("Experiments");
   __29->GetYaxis()->CenterTitle(true);
   __29->GetYaxis()->SetNdivisions(4000510);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleSize(0.04);
   __29->GetYaxis()->SetTitleOffset(1.1);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
