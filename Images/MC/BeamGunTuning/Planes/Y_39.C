void Y_39()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_39__81 = new TH1F("Y_39__81","Plane 39",100,-100,100);
   Y_39__81->SetBinContent(36,1);
   Y_39__81->SetBinContent(41,7);
   Y_39__81->SetBinContent(42,10);
   Y_39__81->SetBinContent(43,33);
   Y_39__81->SetBinContent(44,21);
   Y_39__81->SetBinContent(45,14);
   Y_39__81->SetBinContent(46,16);
   Y_39__81->SetBinContent(47,16);
   Y_39__81->SetBinContent(48,12);
   Y_39__81->SetBinContent(49,33);
   Y_39__81->SetBinContent(50,76);
   Y_39__81->SetBinContent(51,46);
   Y_39__81->SetBinContent(52,11);
   Y_39__81->SetBinContent(53,13);
   Y_39__81->SetBinContent(54,12);
   Y_39__81->SetBinContent(55,14);
   Y_39__81->SetBinContent(56,15);
   Y_39__81->SetBinContent(57,16);
   Y_39__81->SetBinContent(58,26);
   Y_39__81->SetBinContent(59,31);
   Y_39__81->SetBinContent(63,1);
   Y_39__81->SetBinContent(71,1);
   Y_39__81->SetEntries(425);
   Y_39__81->SetLineWidth(3);
   Y_39__81->GetXaxis()->SetTitle("Y [mm]");
   Y_39__81->GetXaxis()->CenterTitle(true);
   Y_39__81->GetXaxis()->SetLabelFont(42);
   Y_39__81->GetXaxis()->SetTitleSize(0.04);
   Y_39__81->GetXaxis()->SetTitleOffset(1.1);
   Y_39__81->GetXaxis()->SetTitleFont(42);
   Y_39__81->GetYaxis()->SetTitle("Ghost tracks");
   Y_39__81->GetYaxis()->CenterTitle(true);
   Y_39__81->GetYaxis()->SetNdivisions(4000510);
   Y_39__81->GetYaxis()->SetLabelFont(42);
   Y_39__81->GetYaxis()->SetTitleSize(0.04);
   Y_39__81->GetYaxis()->SetTitleOffset(1.1);
   Y_39__81->GetYaxis()->SetTitleFont(42);
   Y_39__81->GetZaxis()->SetLabelFont(42);
   Y_39__81->GetZaxis()->SetTitleOffset(1);
   Y_39__81->GetZaxis()->SetTitleFont(42);
   Y_39__81->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
