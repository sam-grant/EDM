void Y_37()
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
   
   TH1F *Y_37__77 = new TH1F("Y_37__77","Plane 37",100,-100,100);
   Y_37__77->SetBinContent(38,1);
   Y_37__77->SetBinContent(41,5);
   Y_37__77->SetBinContent(42,9);
   Y_37__77->SetBinContent(43,34);
   Y_37__77->SetBinContent(44,18);
   Y_37__77->SetBinContent(45,19);
   Y_37__77->SetBinContent(46,14);
   Y_37__77->SetBinContent(47,14);
   Y_37__77->SetBinContent(48,17);
   Y_37__77->SetBinContent(49,32);
   Y_37__77->SetBinContent(50,78);
   Y_37__77->SetBinContent(51,43);
   Y_37__77->SetBinContent(52,13);
   Y_37__77->SetBinContent(53,11);
   Y_37__77->SetBinContent(54,14);
   Y_37__77->SetBinContent(55,12);
   Y_37__77->SetBinContent(56,14);
   Y_37__77->SetBinContent(57,18);
   Y_37__77->SetBinContent(58,28);
   Y_37__77->SetBinContent(59,29);
   Y_37__77->SetBinContent(60,1);
   Y_37__77->SetBinContent(63,1);
   Y_37__77->SetBinContent(70,1);
   Y_37__77->SetBinContent(78,1);
   Y_37__77->SetEntries(427);
   Y_37__77->SetLineWidth(3);
   Y_37__77->GetXaxis()->SetTitle("Y [mm]");
   Y_37__77->GetXaxis()->CenterTitle(true);
   Y_37__77->GetXaxis()->SetLabelFont(42);
   Y_37__77->GetXaxis()->SetTitleSize(0.04);
   Y_37__77->GetXaxis()->SetTitleOffset(1.1);
   Y_37__77->GetXaxis()->SetTitleFont(42);
   Y_37__77->GetYaxis()->SetTitle("Ghost tracks");
   Y_37__77->GetYaxis()->CenterTitle(true);
   Y_37__77->GetYaxis()->SetNdivisions(4000510);
   Y_37__77->GetYaxis()->SetLabelFont(42);
   Y_37__77->GetYaxis()->SetTitleSize(0.04);
   Y_37__77->GetYaxis()->SetTitleOffset(1.1);
   Y_37__77->GetYaxis()->SetTitleFont(42);
   Y_37__77->GetZaxis()->SetLabelFont(42);
   Y_37__77->GetZaxis()->SetTitleOffset(1);
   Y_37__77->GetZaxis()->SetTitleFont(42);
   Y_37__77->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
