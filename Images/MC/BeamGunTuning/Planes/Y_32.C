void Y_32()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_32__67 = new TH1F("Y_32__67","Plane 32",100,-100,100);
   Y_32__67->SetBinContent(27,1);
   Y_32__67->SetBinContent(41,6);
   Y_32__67->SetBinContent(42,11);
   Y_32__67->SetBinContent(43,31);
   Y_32__67->SetBinContent(44,22);
   Y_32__67->SetBinContent(45,15);
   Y_32__67->SetBinContent(46,18);
   Y_32__67->SetBinContent(47,16);
   Y_32__67->SetBinContent(48,11);
   Y_32__67->SetBinContent(49,33);
   Y_32__67->SetBinContent(50,83);
   Y_32__67->SetBinContent(51,43);
   Y_32__67->SetBinContent(52,9);
   Y_32__67->SetBinContent(53,11);
   Y_32__67->SetBinContent(54,13);
   Y_32__67->SetBinContent(55,14);
   Y_32__67->SetBinContent(56,11);
   Y_32__67->SetBinContent(57,18);
   Y_32__67->SetBinContent(58,27);
   Y_32__67->SetBinContent(59,32);
   Y_32__67->SetBinContent(65,1);
   Y_32__67->SetBinContent(70,1);
   Y_32__67->SetBinContent(77,1);
   Y_32__67->SetEntries(428);
   Y_32__67->SetLineWidth(3);
   Y_32__67->GetXaxis()->SetTitle("Y [mm]");
   Y_32__67->GetXaxis()->CenterTitle(true);
   Y_32__67->GetXaxis()->SetLabelFont(42);
   Y_32__67->GetXaxis()->SetTitleSize(0.04);
   Y_32__67->GetXaxis()->SetTitleOffset(1.1);
   Y_32__67->GetXaxis()->SetTitleFont(42);
   Y_32__67->GetYaxis()->SetTitle("Ghost tracks");
   Y_32__67->GetYaxis()->CenterTitle(true);
   Y_32__67->GetYaxis()->SetNdivisions(4000510);
   Y_32__67->GetYaxis()->SetLabelFont(42);
   Y_32__67->GetYaxis()->SetTitleSize(0.04);
   Y_32__67->GetYaxis()->SetTitleOffset(1.1);
   Y_32__67->GetYaxis()->SetTitleFont(42);
   Y_32__67->GetZaxis()->SetLabelFont(42);
   Y_32__67->GetZaxis()->SetTitleOffset(1);
   Y_32__67->GetZaxis()->SetTitleFont(42);
   Y_32__67->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
